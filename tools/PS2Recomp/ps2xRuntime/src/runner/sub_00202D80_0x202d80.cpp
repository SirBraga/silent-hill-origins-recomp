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

// Function: sub_00202D80
// Address: 0x202d80 - 0x202f28
void sub_00202D80_0x202d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D80_0x202d80");
#endif

    switch (ctx->pc) {
        case 0x202db0u: goto label_202db0;
        case 0x202de4u: goto label_202de4;
        case 0x202e6cu: goto label_202e6c;
        case 0x202e90u: goto label_202e90;
        case 0x202e9cu: goto label_202e9c;
        default: break;
    }

    ctx->pc = 0x202d80u;

    // 0x202d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202d84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x202d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x202d88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x202d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x202d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202d94: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x202d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x202d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202d9c: 0x18a0005a  blez        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x202D9Cu;
    {
        const bool branch_taken_0x202d9c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x202DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D9Cu;
        // 0x202da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d9c) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202DA4u;
    // 0x202da4: 0x28a20401  slti        $v0, $a1, 0x401
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x202da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202DA8u;
    {
        const bool branch_taken_0x202da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DA8u;
        // 0x202dac: 0x24a2000f  addiu       $v0, $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202da8) {
            ctx->pc = 0x202DB8u;
            goto label_202db8;
        }
    }
    ctx->pc = 0x202DB0u;
label_202db0:
    // 0x202db0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x202DB0u;
    {
        const bool branch_taken_0x202db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DB0u;
        // 0x202db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202db0) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202DB8u;
label_202db8:
    // 0x202db8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x202db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x202dbc: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x202dbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202dc0: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
    // 0x202dc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x202dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x202dc8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x202dcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202DCCu;
    {
        const bool branch_taken_0x202dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DCCu;
        // 0x202dd0: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dcc) {
            ctx->pc = 0x202DDCu;
            goto label_202ddc;
        }
    }
    ctx->pc = 0x202DD4u;
    // 0x202dd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202DD4u;
    {
        const bool branch_taken_0x202dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DD4u;
        // 0x202dd8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dd4) {
            ctx->pc = 0x202DF0u;
            goto label_202df0;
        }
    }
    ctx->pc = 0x202DDCu;
label_202ddc:
    // 0x202ddc: 0xc080cc0  jal         func_203300
    ctx->pc = 0x202DDCu;
    SET_GPR_U32(ctx, 31, 0x202DE4u);
    ctx->pc = 0x202DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DDCu;
    // 0x202de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203300u, 0x202DDCu, 0x202DE4u)) {
        return;
    }
    ctx->pc = 0x202DE4u;
label_202de4:
    // 0x202de4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x202de8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x202DE8u;
    {
        const bool branch_taken_0x202de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DE8u;
        // 0x202dec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202de8) {
            ctx->pc = 0x202DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202db0;
        }
    }
    ctx->pc = 0x202DF0u;
label_202df0:
    // 0x202df0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x202df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202df4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x202df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x202df8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x202dfc: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x202DFCu;
    {
        const bool branch_taken_0x202dfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DFCu;
        // 0x202e00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dfc) {
            ctx->pc = 0x202E5Cu;
            goto label_202e5c;
        }
    }
    ctx->pc = 0x202E04u;
    // 0x202e04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202e08: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x202e0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x202e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x202e10: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x202e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x202e14: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x202e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x202e18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202e1c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x202e20: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x202e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x202e24: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x202e28: 0x24621fff  addiu       $v0, $v1, 0x1FFF
    ctx->pc = 0x202e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8191));
    // 0x202e2c: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x202e2cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x202e30: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x202e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x202e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x202e38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x202e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202e40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x202e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x202e44: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x202e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x202e48: 0x8cc20284  lw          $v0, 0x284($a2)
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
    // 0x202e4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x202e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x202e50: 0xacc20284  sw          $v0, 0x284($a2)
    ctx->pc = 0x202e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 644), GPR_U32(ctx, 2));
    // 0x202e54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x202E54u;
    {
        const bool branch_taken_0x202e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E54u;
        // 0x202e58: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e54) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202E5Cu;
label_202e5c:
    // 0x202e5c: 0x26130120  addiu       $s3, $s0, 0x120
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x202e60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e64: 0xc086f6a  jal         func_21BDA8
    ctx->pc = 0x202E64u;
    SET_GPR_U32(ctx, 31, 0x202E6Cu);
    ctx->pc = 0x202E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E64u;
    // 0x202e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BDA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BDA8u, 0x202E64u, 0x202E6Cu)) {
        return;
    }
    ctx->pc = 0x202E6Cu;
label_202e6c:
    // 0x202e6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x202e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e70: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x202E70u;
    {
        const bool branch_taken_0x202e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202e70) {
            ctx->pc = 0x202E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202E70u;
            // 0x202e74: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202EACu;
            goto label_202eac;
        }
    }
    ctx->pc = 0x202E78u;
    // 0x202e78: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x202e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x202e7c: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x202e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x202e80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202E80u;
    {
        const bool branch_taken_0x202e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202e80) {
            ctx->pc = 0x202EA0u;
            goto label_202ea0;
        }
    }
    ctx->pc = 0x202E88u;
    // 0x202e88: 0xc080cd8  jal         func_203360
    ctx->pc = 0x202E88u;
    SET_GPR_U32(ctx, 31, 0x202E90u);
    ctx->pc = 0x202E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E88u;
    // 0x202e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203360u, 0x202E88u, 0x202E90u)) {
        return;
    }
    ctx->pc = 0x202E90u;
label_202e90:
    // 0x202e90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e94: 0xc086f6a  jal         func_21BDA8
    ctx->pc = 0x202E94u;
    SET_GPR_U32(ctx, 31, 0x202E9Cu);
    ctx->pc = 0x202E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E94u;
    // 0x202e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BDA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BDA8u, 0x202E94u, 0x202E9Cu)) {
        return;
    }
    ctx->pc = 0x202E9Cu;
label_202e9c:
    // 0x202e9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x202e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202ea0:
    // 0x202ea0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x202EA0u;
    {
        const bool branch_taken_0x202ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202ea0) {
            ctx->pc = 0x202EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202EA0u;
            // 0x202ea4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202EFCu;
            goto label_202efc;
        }
    }
    ctx->pc = 0x202EA8u;
    // 0x202ea8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x202ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_202eac:
    // 0x202eac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202eb0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x202eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x202eb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202eb8: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x202ebc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202ec0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x202ec4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202ec8: 0xc4302a  slt         $a2, $a2, $a0
    ctx->pc = 0x202ec8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202ecc: 0x24831fff  addiu       $v1, $a0, 0x1FFF
    ctx->pc = 0x202eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8191));
    // 0x202ed0: 0x86180b  movn        $v1, $a0, $a2
    ctx->pc = 0x202ed0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x202ed4: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x202ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202edc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x202edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x202ee0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202ee4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x202ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x202ee8: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x202ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x202eec: 0x8ce30284  lw          $v1, 0x284($a3)
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 644)));
    // 0x202ef0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x202ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202EF4u;
    {
        const bool branch_taken_0x202ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF4u;
        // 0x202ef8: 0xace30284  sw          $v1, 0x284($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef4) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202EFCu;
label_202efc:
    // 0x202efc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x202f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x202f04: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x202f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_202f08:
    // 0x202f08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x202f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202f0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x202f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202f10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202f14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x202f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x202F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F1Cu;
        // 0x202f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202F24u;
    // 0x202f24: 0x0  nop
    ctx->pc = 0x202f24u;
    // NOP
    ctx->pc = 0x202f28u;
}
