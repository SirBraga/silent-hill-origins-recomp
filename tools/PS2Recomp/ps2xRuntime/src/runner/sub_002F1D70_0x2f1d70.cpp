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

// Function: sub_002F1D70
// Address: 0x2f1d70 - 0x2f1ef0
void sub_002F1D70_0x2f1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D70_0x2f1d70");
#endif

    switch (ctx->pc) {
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ed0u: goto label_2f1ed0;
        default: break;
    }

    ctx->pc = 0x2f1d70u;

label_2f1d70:
    // 0x2f1d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1d74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1d78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1d7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f1d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1d84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1d8c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2F1D8Cu;
    {
        const bool branch_taken_0x2f1d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D8Cu;
        // 0x2f1d90: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d8c) {
            ctx->pc = 0x2F1E9Cu;
            goto label_2f1e9c;
        }
    }
    ctx->pc = 0x2F1D94u;
    // 0x2f1d94: 0x0  nop
    ctx->pc = 0x2f1d94u;
    // NOP
label_2f1d98:
    // 0x2f1d98: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1D98u;
    {
        const bool branch_taken_0x2f1d98 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2F1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D98u;
        // 0x2f1d9c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d98) {
            ctx->pc = 0x2F1DB0u;
            goto label_2f1db0;
        }
    }
    ctx->pc = 0x2F1DA0u;
    // 0x2f1da0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1DA0u;
    {
        const bool branch_taken_0x2f1da0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2F1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DA0u;
        // 0x2f1da4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1da0) {
            ctx->pc = 0x2F1DB0u;
            goto label_2f1db0;
        }
    }
    ctx->pc = 0x2F1DA8u;
    // 0x2f1da8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2f1da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f1dac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2f1dacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_2f1db0:
    // 0x2f1db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1db4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1db8: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x2F1DB8u;
    SET_GPR_U32(ctx, 31, 0x2F1DC0u);
    ctx->pc = 0x2F1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DB8u;
    // 0x2f1dbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x2F1DB8u, 0x2F1DC0u)) {
        return;
    }
    ctx->pc = 0x2F1DC0u;
label_2f1dc0:
    // 0x2f1dc0: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F1DC0u;
    {
        const bool branch_taken_0x2f1dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DC0u;
        // 0x2f1dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dc0) {
            ctx->pc = 0x2F1ED4u;
            goto label_2f1ed4;
        }
    }
    ctx->pc = 0x2F1DC8u;
    // 0x2f1dc8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2f1dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f1dcc: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2f1dccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2f1dd0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f1dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f1dd4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2f1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f1dd8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F1DD8u;
    {
        const bool branch_taken_0x2f1dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DD8u;
        // 0x2f1ddc: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dd8) {
            ctx->pc = 0x2F1E04u;
            goto label_2f1e04;
        }
    }
    ctx->pc = 0x2F1DE0u;
    // 0x2f1de0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f1de4: 0x0  nop
    ctx->pc = 0x2f1de4u;
    // NOP
label_2f1de8:
    // 0x2f1de8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2f1de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f1dec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F1DECu;
    {
        const bool branch_taken_0x2f1dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DECu;
        // 0x2f1df0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dec) {
            ctx->pc = 0x2F1E6Cu;
            goto label_2f1e6c;
        }
    }
    ctx->pc = 0x2F1DF4u;
    // 0x2f1df4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f1df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f1df8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2f1df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f1dfc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F1DFCu;
    {
        const bool branch_taken_0x2f1dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DFCu;
        // 0x2f1e00: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dfc) {
            ctx->pc = 0x2F1DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1de8;
        }
    }
    ctx->pc = 0x2F1E04u;
label_2f1e04:
    // 0x2f1e04: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2f1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f1e08: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x2f1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2f1e0c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f1e10: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F1E10u;
    {
        const bool branch_taken_0x2f1e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E10u;
        // 0x2f1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e10) {
            ctx->pc = 0x2F1EA0u;
            goto label_2f1ea0;
        }
    }
    ctx->pc = 0x2F1E18u;
    // 0x2f1e18: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x2f1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2f1e1c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2f1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2f1e20:
    // 0x2f1e20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f1e24:
    // 0x2f1e24: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2f1e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f1e28: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2f1e28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f1e2c: 0x0  nop
    ctx->pc = 0x2f1e2cu;
    // NOP
    // 0x2f1e30: 0x0  nop
    ctx->pc = 0x2f1e30u;
    // NOP
    // 0x2f1e34: 0x1044fffa  beq         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F1E34u;
    {
        const bool branch_taken_0x2f1e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f1e34) {
            ctx->pc = 0x2F1E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1e20;
        }
    }
    ctx->pc = 0x2F1E3Cu;
    // 0x2f1e3c: 0x5043fff9  beql        $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F1E3Cu;
    {
        const bool branch_taken_0x2f1e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1e3c) {
            ctx->pc = 0x2F1E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1E3Cu;
            // 0x2f1e40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1e24;
        }
    }
    ctx->pc = 0x2F1E44u;
    // 0x2f1e44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1E44u;
    {
        const bool branch_taken_0x2f1e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E44u;
        // 0x2f1e48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e44) {
            ctx->pc = 0x2F1E6Cu;
            goto label_2f1e6c;
        }
    }
    ctx->pc = 0x2F1E4Cu;
    // 0x2f1e4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F1E4Cu;
    {
        const bool branch_taken_0x2f1e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E4Cu;
        // 0x2f1e50: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e4c) {
            ctx->pc = 0x2F1E7Cu;
            goto label_2f1e7c;
        }
    }
    ctx->pc = 0x2F1E54u;
    // 0x2f1e54: 0x0  nop
    ctx->pc = 0x2f1e54u;
    // NOP
label_2f1e58:
    // 0x2f1e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f1e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e5c: 0xc0bc75c  jal         func_2F1D70
    ctx->pc = 0x2F1E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F1E64u);
    ctx->pc = 0x2F1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E5Cu;
    // 0x2f1e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D70u;
    goto label_2f1d70;
    ctx->pc = 0x2F1E64u;
label_2f1e64:
    // 0x2f1e64: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1E64u;
    {
        const bool branch_taken_0x2f1e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f1e64) {
            ctx->pc = 0x2F1E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1E64u;
            // 0x2f1e68: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1E74u;
            goto label_2f1e74;
        }
    }
    ctx->pc = 0x2F1E6Cu;
label_2f1e6c:
    // 0x2f1e6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F1E6Cu;
    {
        const bool branch_taken_0x2f1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E6Cu;
        // 0x2f1e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e6c) {
            ctx->pc = 0x2F1ED4u;
            goto label_2f1ed4;
        }
    }
    ctx->pc = 0x2F1E74u;
label_2f1e74:
    // 0x2f1e74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f1e78: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2f1e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2f1e7c:
    // 0x2f1e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e80: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x2F1E80u;
    SET_GPR_U32(ctx, 31, 0x2F1E88u);
    ctx->pc = 0x2F1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E80u;
    // 0x2f1e84: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1C40u, 0x2F1E80u, 0x2F1E88u)) {
        return;
    }
    ctx->pc = 0x2F1E88u;
label_2f1e88:
    // 0x2f1e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e8c: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F1E8Cu;
    {
        const bool branch_taken_0x2f1e8c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E8Cu;
        // 0x2f1e90: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e8c) {
            ctx->pc = 0x2F1E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1e58;
        }
    }
    ctx->pc = 0x2F1E94u;
    // 0x2f1e94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F1E94u;
    {
        const bool branch_taken_0x2f1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E94u;
        // 0x2f1e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e94) {
            ctx->pc = 0x2F1ED4u;
            goto label_2f1ed4;
        }
    }
    ctx->pc = 0x2F1E9Cu;
label_2f1e9c:
    // 0x2f1e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ea0:
    // 0x2f1ea0: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x2F1EA0u;
    SET_GPR_U32(ctx, 31, 0x2F1EA8u);
    ctx->pc = 0x2F1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EA0u;
    // 0x2f1ea4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1C40u, 0x2F1EA0u, 0x2F1EA8u)) {
        return;
    }
    ctx->pc = 0x2F1EA8u;
label_2f1ea8:
    // 0x2f1ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f1ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1eb0: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x2F1EB0u;
    SET_GPR_U32(ctx, 31, 0x2F1EB8u);
    ctx->pc = 0x2F1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EB0u;
    // 0x2f1eb4: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1C40u, 0x2F1EB0u, 0x2F1EB8u)) {
        return;
    }
    ctx->pc = 0x2F1EB8u;
label_2f1eb8:
    // 0x2f1eb8: 0x641ffb7  bgez        $s2, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2F1EB8u;
    {
        const bool branch_taken_0x2f1eb8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2F1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EB8u;
        // 0x2f1ebc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1eb8) {
            ctx->pc = 0x2F1D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1d98;
        }
    }
    ctx->pc = 0x2F1EC0u;
    // 0x2f1ec0: 0x461ffb5  bgez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2F1EC0u;
    {
        const bool branch_taken_0x2f1ec0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2F1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EC0u;
        // 0x2f1ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ec0) {
            ctx->pc = 0x2F1D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1d98;
        }
    }
    ctx->pc = 0x2F1EC8u;
    // 0x2f1ec8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F1EC8u;
    SET_GPR_U32(ctx, 31, 0x2F1ED0u);
    ctx->pc = 0x2F1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EC8u;
    // 0x2f1ecc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F1EC8u, 0x2F1ED0u)) {
        return;
    }
    ctx->pc = 0x2F1ED0u;
label_2f1ed0:
    // 0x2f1ed0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f1ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f1ed4:
    // 0x2f1ed4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1ed8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1ed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1edc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1ee0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EE8u;
        // 0x2f1eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1EF0u;
}
