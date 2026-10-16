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

// Function: sub_00301D10
// Address: 0x301d10 - 0x301fc0
void sub_00301D10_0x301d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301D10_0x301d10");
#endif

    switch (ctx->pc) {
        case 0x301d34u: goto label_301d34;
        case 0x301d64u: goto label_301d64;
        case 0x301d70u: goto label_301d70;
        case 0x301d94u: goto label_301d94;
        case 0x301da4u: goto label_301da4;
        case 0x301dc8u: goto label_301dc8;
        case 0x301decu: goto label_301dec;
        case 0x301df8u: goto label_301df8;
        case 0x301e0cu: goto label_301e0c;
        case 0x301e14u: goto label_301e14;
        case 0x301e58u: goto label_301e58;
        case 0x301e74u: goto label_301e74;
        case 0x301e88u: goto label_301e88;
        case 0x301e94u: goto label_301e94;
        case 0x301ea4u: goto label_301ea4;
        case 0x301eccu: goto label_301ecc;
        case 0x301ef0u: goto label_301ef0;
        case 0x301ef8u: goto label_301ef8;
        case 0x301f0cu: goto label_301f0c;
        case 0x301f14u: goto label_301f14;
        case 0x301f5cu: goto label_301f5c;
        case 0x301f80u: goto label_301f80;
        case 0x301f94u: goto label_301f94;
        case 0x301f9cu: goto label_301f9c;
        case 0x301fa4u: goto label_301fa4;
        default: break;
    }

    ctx->pc = 0x301d10u;

    // 0x301d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x301d14: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x301d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x301d18: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x301d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x301d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x301d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x301d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x301d24: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x301d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x301d28: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x301d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x301d2c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301D2Cu;
    SET_GPR_U32(ctx, 31, 0x301D34u);
    ctx->pc = 0x301D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D2Cu;
    // 0x301d30: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301D2Cu, 0x301D34u)) {
        return;
    }
    ctx->pc = 0x301D34u;
label_301d34:
    // 0x301d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x301d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d38: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x301d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x301d3c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x301d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x301d40: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x301d44: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x301d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x301d48: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x301d48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x301d4c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301D4Cu;
    {
        const bool branch_taken_0x301d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x301D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D4Cu;
        // 0x301d50: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d4c) {
            ctx->pc = 0x301D64u;
            goto label_301d64;
        }
    }
    ctx->pc = 0x301D54u;
    // 0x301d54: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x301d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x301d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d5c: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x301D5Cu;
    SET_GPR_U32(ctx, 31, 0x301D64u);
    ctx->pc = 0x301D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D5Cu;
    // 0x301d60: 0x24a50968  addiu       $a1, $a1, 0x968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x301D5Cu, 0x301D64u)) {
        return;
    }
    ctx->pc = 0x301D64u;
label_301d64:
    // 0x301d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d68: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301D68u;
    SET_GPR_U32(ctx, 31, 0x301D70u);
    ctx->pc = 0x301D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D68u;
    // 0x301d6c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301D68u, 0x301D70u)) {
        return;
    }
    ctx->pc = 0x301D70u;
label_301d70:
    // 0x301d70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x301d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d78: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x301d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x301d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301d80: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x301d84: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x301d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x301d88: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x301d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x301d8c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301D8Cu;
    SET_GPR_U32(ctx, 31, 0x301D94u);
    ctx->pc = 0x301D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D8Cu;
    // 0x301d90: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301D8Cu, 0x301D94u)) {
        return;
    }
    ctx->pc = 0x301D94u;
label_301d94:
    // 0x301d94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x301D94u;
    {
        const bool branch_taken_0x301d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D94u;
        // 0x301d98: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d94) {
            ctx->pc = 0x301DD0u;
            goto label_301dd0;
        }
    }
    ctx->pc = 0x301D9Cu;
    // 0x301d9c: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301D9Cu;
    SET_GPR_U32(ctx, 31, 0x301DA4u);
    ctx->pc = 0x301DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D9Cu;
    // 0x301da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301D9Cu, 0x301DA4u)) {
        return;
    }
    ctx->pc = 0x301DA4u;
label_301da4:
    // 0x301da4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301da8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x301da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x301dac: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x301dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x301db0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301db4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x301db4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x301db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301dbc: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x301dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x301dc0: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301DC0u;
    SET_GPR_U32(ctx, 31, 0x301DC8u);
    ctx->pc = 0x301DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DC0u;
    // 0x301dc4: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301DC0u, 0x301DC8u)) {
        return;
    }
    ctx->pc = 0x301DC8u;
label_301dc8:
    // 0x301dc8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x301DC8u;
    {
        const bool branch_taken_0x301dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DC8u;
        // 0x301dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dc8) {
            ctx->pc = 0x301E8Cu;
            goto label_301e8c;
        }
    }
    ctx->pc = 0x301DD0u;
label_301dd0:
    // 0x301dd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x301dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301dd4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x301dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x301dd8: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x301dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x301ddc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x301ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x301de0: 0x26106800  addiu       $s0, $s0, 0x6800
    ctx->pc = 0x301de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26624));
    // 0x301de4: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x301DE4u;
    SET_GPR_U32(ctx, 31, 0x301DECu);
    ctx->pc = 0x301DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DE4u;
    // 0x301de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x301DE4u, 0x301DECu)) {
        return;
    }
    ctx->pc = 0x301DECu;
label_301dec:
    // 0x301dec: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x301decu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x301df0: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301DF0u;
    SET_GPR_U32(ctx, 31, 0x301DF8u);
    ctx->pc = 0x301DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DF0u;
    // 0x301df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301DF0u, 0x301DF8u)) {
        return;
    }
    ctx->pc = 0x301DF8u;
label_301df8:
    // 0x301df8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e00: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x301e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x301e04: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301E04u;
    SET_GPR_U32(ctx, 31, 0x301E0Cu);
    ctx->pc = 0x301E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E04u;
    // 0x301e08: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301E04u, 0x301E0Cu)) {
        return;
    }
    ctx->pc = 0x301E0Cu;
label_301e0c:
    // 0x301e0c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x301E0Cu;
    SET_GPR_U32(ctx, 31, 0x301E14u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x301E0Cu, 0x301E14u)) {
        return;
    }
    ctx->pc = 0x301E14u;
label_301e14:
    // 0x301e14: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x301e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x301e18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x301e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x301e1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x301e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x301e20: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x301e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x301e24: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x301e24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x301e28: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x301e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x301e2c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x301e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x301e30: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x301e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x301e34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x301e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301e38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x301e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x301e3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x301e3cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x301e40: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x301e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x301e44: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x301e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x301e48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301E48u;
    {
        const bool branch_taken_0x301e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E48u;
        // 0x301e4c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e48) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301E50u;
    // 0x301e50: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x301E50u;
    SET_GPR_U32(ctx, 31, 0x301E58u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x301E50u, 0x301E58u)) {
        return;
    }
    ctx->pc = 0x301E58u;
label_301e58:
    // 0x301e58: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x301e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x301e5c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x301e5cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x301e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301e64: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x301e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x301e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e6c: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301E6Cu;
    SET_GPR_U32(ctx, 31, 0x301E74u);
    ctx->pc = 0x301E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E6Cu;
    // 0x301e70: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301E6Cu, 0x301E74u)) {
        return;
    }
    ctx->pc = 0x301E74u;
label_301e74:
    // 0x301e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x301e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301e78: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x301e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x301e7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x301e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x301e80: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x301E80u;
    SET_GPR_U32(ctx, 31, 0x301E88u);
    ctx->pc = 0x301E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E80u;
    // 0x301e84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x301E80u, 0x301E88u)) {
        return;
    }
    ctx->pc = 0x301E88u;
label_301e88:
    // 0x301e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301e8c:
    // 0x301e8c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x301E8Cu;
    SET_GPR_U32(ctx, 31, 0x301E94u);
    ctx->pc = 0x301E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E8Cu;
    // 0x301e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x301E8Cu, 0x301E94u)) {
        return;
    }
    ctx->pc = 0x301E94u;
label_301e94:
    // 0x301e94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x301E94u;
    {
        const bool branch_taken_0x301e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E94u;
        // 0x301e98: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e94) {
            ctx->pc = 0x301ED4u;
            goto label_301ed4;
        }
    }
    ctx->pc = 0x301E9Cu;
    // 0x301e9c: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301E9Cu;
    SET_GPR_U32(ctx, 31, 0x301EA4u);
    ctx->pc = 0x301EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E9Cu;
    // 0x301ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301E9Cu, 0x301EA4u)) {
        return;
    }
    ctx->pc = 0x301EA4u;
label_301ea4:
    // 0x301ea4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301ea8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x301ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x301eac: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x301eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x301eb0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x301eb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x301eb4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x301eb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301ebc: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x301ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x301ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ec4: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301EC4u;
    SET_GPR_U32(ctx, 31, 0x301ECCu);
    ctx->pc = 0x301EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EC4u;
    // 0x301ec8: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301EC4u, 0x301ECCu)) {
        return;
    }
    ctx->pc = 0x301ECCu;
label_301ecc:
    // 0x301ecc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x301ECCu;
    {
        const bool branch_taken_0x301ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ecc) {
            ctx->pc = 0x301F94u;
            goto label_301f94;
        }
    }
    ctx->pc = 0x301ED4u;
label_301ed4:
    // 0x301ed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301ed8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x301ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x301edc: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x301ee0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x301ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x301ee4: 0x26106840  addiu       $s0, $s0, 0x6840
    ctx->pc = 0x301ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
    // 0x301ee8: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x301EE8u;
    SET_GPR_U32(ctx, 31, 0x301EF0u);
    ctx->pc = 0x301EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EE8u;
    // 0x301eec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x301EE8u, 0x301EF0u)) {
        return;
    }
    ctx->pc = 0x301EF0u;
label_301ef0:
    // 0x301ef0: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301EF0u;
    SET_GPR_U32(ctx, 31, 0x301EF8u);
    ctx->pc = 0x301EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EF0u;
    // 0x301ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301EF0u, 0x301EF8u)) {
        return;
    }
    ctx->pc = 0x301EF8u;
label_301ef8:
    // 0x301ef8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x301efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f00: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x301f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x301f04: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301F04u;
    SET_GPR_U32(ctx, 31, 0x301F0Cu);
    ctx->pc = 0x301F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F04u;
    // 0x301f08: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301F04u, 0x301F0Cu)) {
        return;
    }
    ctx->pc = 0x301F0Cu;
label_301f0c:
    // 0x301f0c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x301F0Cu;
    SET_GPR_U32(ctx, 31, 0x301F14u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x301F0Cu, 0x301F14u)) {
        return;
    }
    ctx->pc = 0x301F14u;
label_301f14:
    // 0x301f14: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x301f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x301f18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x301f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x301f1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x301f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x301f20: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x301f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x301f24: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x301f24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x301f28: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x301f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x301f2c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x301f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x301f30: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x301f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x301f34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x301f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301f38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x301f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x301f3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x301f3cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x301f40: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x301f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x301f44: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x301f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x301f48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x301f48u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x301f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x301F4Cu;
    {
        const bool branch_taken_0x301f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F4Cu;
        // 0x301f50: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f4c) {
            ctx->pc = 0x301F60u;
            goto label_301f60;
        }
    }
    ctx->pc = 0x301F54u;
    // 0x301f54: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x301F54u;
    SET_GPR_U32(ctx, 31, 0x301F5Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x301F54u, 0x301F5Cu)) {
        return;
    }
    ctx->pc = 0x301F5Cu;
label_301f5c:
    // 0x301f5c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x301f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_301f60:
    // 0x301f60: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x301f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x301f64: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x301f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x301f68: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x301f68u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x301f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301f74: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x301f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x301f78: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x301F78u;
    SET_GPR_U32(ctx, 31, 0x301F80u);
    ctx->pc = 0x301F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F78u;
    // 0x301f7c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x301F78u, 0x301F80u)) {
        return;
    }
    ctx->pc = 0x301F80u;
label_301f80:
    // 0x301f80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x301f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301f84: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x301f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x301f88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x301f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x301f8c: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x301F8Cu;
    SET_GPR_U32(ctx, 31, 0x301F94u);
    ctx->pc = 0x301F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F8Cu;
    // 0x301f90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x301F8Cu, 0x301F94u)) {
        return;
    }
    ctx->pc = 0x301F94u;
label_301f94:
    // 0x301f94: 0xc0c097e  jal         func_3025F8
    ctx->pc = 0x301F94u;
    SET_GPR_U32(ctx, 31, 0x301F9Cu);
    ctx->pc = 0x301F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F94u;
    // 0x301f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3025F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3025F8u, 0x301F94u, 0x301F9Cu)) {
        return;
    }
    ctx->pc = 0x301F9Cu;
label_301f9c:
    // 0x301f9c: 0xc0c067e  jal         func_3019F8
    ctx->pc = 0x301F9Cu;
    SET_GPR_U32(ctx, 31, 0x301FA4u);
    ctx->pc = 0x301FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F9Cu;
    // 0x301fa0: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3019F8u, 0x301F9Cu, 0x301FA4u)) {
        return;
    }
    ctx->pc = 0x301FA4u;
label_301fa4:
    // 0x301fa4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x301fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301fa8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x301fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301fac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x301facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301fb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x301fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x301FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FB4u;
        // 0x301fb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301FBCu;
    // 0x301fbc: 0x0  nop
    ctx->pc = 0x301fbcu;
    // NOP
    ctx->pc = 0x301fc0u;
}
