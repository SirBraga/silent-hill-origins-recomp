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

// Function: sub_001F9CE0
// Address: 0x1f9ce0 - 0x1f9f48
void sub_001F9CE0_0x1f9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9CE0_0x1f9ce0");
#endif

    switch (ctx->pc) {
        case 0x1f9d0cu: goto label_1f9d0c;
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d48u: goto label_1f9d48;
        case 0x1f9d58u: goto label_1f9d58;
        case 0x1f9e28u: goto label_1f9e28;
        case 0x1f9e58u: goto label_1f9e58;
        case 0x1f9f20u: goto label_1f9f20;
        case 0x1f9f28u: goto label_1f9f28;
        default: break;
    }

    ctx->pc = 0x1f9ce0u;

    // 0x1f9ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f9ce4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f9ce8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f9cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f9cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f9cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9cf8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f9cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9cfc: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9CFCu;
    {
        const bool branch_taken_0x1f9cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CFCu;
        // 0x1f9d00: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cfc) {
            ctx->pc = 0x1F9D0Cu;
            goto label_1f9d0c;
        }
    }
    ctx->pc = 0x1F9D04u;
    // 0x1f9d04: 0xc0c53aa  jal         func_314EA8
    ctx->pc = 0x1F9D04u;
    SET_GPR_U32(ctx, 31, 0x1F9D0Cu);
    ctx->pc = 0x314EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EA8u, 0x1F9D04u, 0x1F9D0Cu)) {
        return;
    }
    ctx->pc = 0x1F9D0Cu;
label_1f9d0c:
    // 0x1f9d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d10: 0xc07ea56  jal         func_1FA958
    ctx->pc = 0x1F9D10u;
    SET_GPR_U32(ctx, 31, 0x1F9D18u);
    ctx->pc = 0x1F9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D10u;
    // 0x1f9d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA958u, 0x1F9D10u, 0x1F9D18u)) {
        return;
    }
    ctx->pc = 0x1F9D18u;
label_1f9d18:
    // 0x1f9d18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9d1c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f9d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9d24: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D24u;
    {
        const bool branch_taken_0x1f9d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1f9d24) {
            ctx->pc = 0x1F9D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D24u;
            // 0x1f9d28: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D34u;
            goto label_1f9d34;
        }
    }
    ctx->pc = 0x1F9D2Cu;
    // 0x1f9d2c: 0xc0c53aa  jal         func_314EA8
    ctx->pc = 0x1F9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D34u);
    ctx->pc = 0x314EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EA8u, 0x1F9D2Cu, 0x1F9D34u)) {
        return;
    }
    ctx->pc = 0x1F9D34u;
label_1f9d34:
    // 0x1f9d34: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f9d38: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F9D38u;
    {
        const bool branch_taken_0x1f9d38 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D38u;
        // 0x1f9d3c: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d38) {
            ctx->pc = 0x1F9E0Cu;
            goto label_1f9e0c;
        }
    }
    ctx->pc = 0x1F9D40u;
    // 0x1f9d40: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x1f9d40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f9d44: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x1f9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_1f9d48:
    // 0x1f9d48: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f9d4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F9D4Cu;
    {
        const bool branch_taken_0x1f9d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D4Cu;
        // 0x1f9d50: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d4c) {
            ctx->pc = 0x1F9DECu;
            goto label_1f9dec;
        }
    }
    ctx->pc = 0x1F9D54u;
    // 0x1f9d54: 0x0  nop
    ctx->pc = 0x1f9d54u;
    // NOP
label_1f9d58:
    // 0x1f9d58: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1f9d5c: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x1f9d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f9d60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9D60u;
    {
        const bool branch_taken_0x1f9d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D60u;
        // 0x1f9d64: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d60) {
            ctx->pc = 0x1F9DB0u;
            goto label_1f9db0;
        }
    }
    ctx->pc = 0x1F9D68u;
    // 0x1f9d68: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x1f9d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1f9d6c: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1f9d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f9d70: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1f9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f9d74: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x1f9d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f9d78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9d7c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f9d80: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9D80u;
    {
        const bool branch_taken_0x1f9d80 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D80u;
        // 0x1f9d84: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d80) {
            ctx->pc = 0x1F9DB4u;
            goto label_1f9db4;
        }
    }
    ctx->pc = 0x1F9D88u;
    // 0x1f9d88: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x1f9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1f9d8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f9d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9d90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9d94: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1f9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f9d98: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9D98u;
    {
        const bool branch_taken_0x1f9d98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D98u;
        // 0x1f9d9c: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d98) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9DA0u;
    // 0x1f9da0: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1f9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1f9da4: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x1f9da4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x1f9da8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F9DA8u;
    {
        const bool branch_taken_0x1f9da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DA8u;
        // 0x1f9dac: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9da8) {
            ctx->pc = 0x1F9DE8u;
            goto label_1f9de8;
        }
    }
    ctx->pc = 0x1F9DB0u;
label_1f9db0:
    // 0x1f9db0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9db4:
    // 0x1f9db4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1f9db8:
    // 0x1f9db8: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1f9dbc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1f9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f9dc0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9dc4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9dc8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9dcc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9dd0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9DD0u;
    {
        const bool branch_taken_0x1f9dd0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1f9dd0) {
            ctx->pc = 0x1F9DFCu;
            goto label_1f9dfc;
        }
    }
    ctx->pc = 0x1F9DD8u;
    // 0x1f9dd8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1f9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1f9ddc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1f9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1f9de0: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f9de4: 0x0  nop
    ctx->pc = 0x1f9de4u;
    // NOP
label_1f9de8:
    // 0x1f9de8: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x1f9de8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9dec:
    // 0x1f9dec: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f9df0: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1f9df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f9df4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F9DF4u;
    {
        const bool branch_taken_0x1f9df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF4u;
        // 0x1f9df8: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df4) {
            ctx->pc = 0x1F9D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d58;
        }
    }
    ctx->pc = 0x1F9DFCu;
label_1f9dfc:
    // 0x1f9dfc: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F9DFCu;
    {
        const bool branch_taken_0x1f9dfc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DFCu;
        // 0x1f9e00: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dfc) {
            ctx->pc = 0x1F9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d48;
        }
    }
    ctx->pc = 0x1F9E04u;
    // 0x1f9e04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9E04u;
    {
        const bool branch_taken_0x1f9e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e04) {
            ctx->pc = 0x1F9E10u;
            goto label_1f9e10;
        }
    }
    ctx->pc = 0x1F9E0Cu;
label_1f9e0c:
    // 0x1f9e0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9e10:
    // 0x1f9e10: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F9E10u;
    {
        const bool branch_taken_0x1f9e10 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E10u;
        // 0x1f9e14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e10) {
            ctx->pc = 0x1F9F18u;
            goto label_1f9f18;
        }
    }
    ctx->pc = 0x1F9E18u;
    // 0x1f9e18: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1f9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1f9e1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f9e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9e20: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f9e24: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_1f9e28:
    // 0x1f9e28: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1f9e28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1f9e2c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f9e30: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1f9e34: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1f9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1f9e38: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1f9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1f9e3c: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x1f9e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f9e40: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F9E40u;
    {
        const bool branch_taken_0x1f9e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E40u;
        // 0x1f9e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e40) {
            ctx->pc = 0x1F9F08u;
            goto label_1f9f08;
        }
    }
    ctx->pc = 0x1F9E48u;
    // 0x1f9e48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e4c: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x1f9e4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f9e50: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x1f9e50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1f9e54: 0x0  nop
    ctx->pc = 0x1f9e54u;
    // NOP
label_1f9e58:
    // 0x1f9e58: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x1f9e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f9e5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9E5Cu;
    {
        const bool branch_taken_0x1f9e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E5Cu;
        // 0x1f9e60: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e5c) {
            ctx->pc = 0x1F9EB0u;
            goto label_1f9eb0;
        }
    }
    ctx->pc = 0x1F9E64u;
    // 0x1f9e64: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x1f9e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1f9e68: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f9e6c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1f9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f9e70: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x1f9e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f9e74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9e78: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1f9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f9e7c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9E7Cu;
    {
        const bool branch_taken_0x1f9e7c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E7Cu;
        // 0x1f9e80: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e7c) {
            ctx->pc = 0x1F9EB4u;
            goto label_1f9eb4;
        }
    }
    ctx->pc = 0x1F9E84u;
    // 0x1f9e84: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x1f9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1f9e88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9e8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9e90: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f9e94: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9E94u;
    {
        const bool branch_taken_0x1f9e94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E94u;
        // 0x1f9e98: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e94) {
            ctx->pc = 0x1F9EB8u;
            goto label_1f9eb8;
        }
    }
    ctx->pc = 0x1F9E9Cu;
    // 0x1f9e9c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1f9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1f9ea0: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x1f9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x1f9ea4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9EA4u;
    {
        const bool branch_taken_0x1f9ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EA4u;
        // 0x1f9ea8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ea4) {
            ctx->pc = 0x1F9EE8u;
            goto label_1f9ee8;
        }
    }
    ctx->pc = 0x1F9EACu;
    // 0x1f9eac: 0x0  nop
    ctx->pc = 0x1f9eacu;
    // NOP
label_1f9eb0:
    // 0x1f9eb0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9eb4:
    // 0x1f9eb4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1f9eb8:
    // 0x1f9eb8: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1f9ebc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f9ec0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9ec4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9ec8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9ecc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9ed0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9ED0u;
    {
        const bool branch_taken_0x1f9ed0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1f9ed0) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9ED8u;
    // 0x1f9ed8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1f9ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1f9edc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1f9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1f9ee0: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f9ee4: 0x0  nop
    ctx->pc = 0x1f9ee4u;
    // NOP
label_1f9ee8:
    // 0x1f9ee8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f9eec: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1f9eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ef0: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f9ef4: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1f9ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f9ef8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1F9EF8u;
    {
        const bool branch_taken_0x1f9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EF8u;
        // 0x1f9efc: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ef8) {
            ctx->pc = 0x1F9E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9e58;
        }
    }
    ctx->pc = 0x1F9F00u;
    // 0x1f9f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9F00u;
    {
        const bool branch_taken_0x1f9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f00) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9F08u;
label_1f9f08:
    // 0x1f9f08: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x1f9f08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f9f0c:
    // 0x1f9f0c: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1F9F0Cu;
    {
        const bool branch_taken_0x1f9f0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F0Cu;
        // 0x1f9f10: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f0c) {
            ctx->pc = 0x1F9E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9e28;
        }
    }
    ctx->pc = 0x1F9F14u;
    // 0x1f9f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f9f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f18:
    // 0x1f9f18: 0xc07e6f8  jal         func_1F9BE0
    ctx->pc = 0x1F9F18u;
    SET_GPR_U32(ctx, 31, 0x1F9F20u);
    ctx->pc = 0x1F9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F18u;
    // 0x1f9f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9BE0u, 0x1F9F18u, 0x1F9F20u)) {
        return;
    }
    ctx->pc = 0x1F9F20u;
label_1f9f20:
    // 0x1f9f20: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1F9F20u;
    SET_GPR_U32(ctx, 31, 0x1F9F28u);
    ctx->pc = 0x1F9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F20u;
    // 0x1f9f24: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1F9F20u, 0x1F9F28u)) {
        return;
    }
    ctx->pc = 0x1F9F28u;
label_1f9f28:
    // 0x1f9f28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9f2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9f30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f9f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f9f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F3Cu;
        // 0x1f9f40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F44u;
    // 0x1f9f44: 0x0  nop
    ctx->pc = 0x1f9f44u;
    // NOP
    ctx->pc = 0x1f9f48u;
}
